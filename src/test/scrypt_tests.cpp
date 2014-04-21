#include <boost/test/unit_test.hpp>

#include "util.h"
#include "scrypt.h"
#include "main.h"

BOOST_AUTO_TEST_SUITE(scrypt_tests)

BOOST_AUTO_TEST_CASE(scrypt_hashtest)
{
    // Test Scrypt hash with known inputs against expected outputs for all 
    // supported Nfactors, only goes up to N = 1048576 due to current 32 bit
    // limit on nTime. Blocktime is packed in the pseudoheaders in inputhex
    #define HASHCOUNT 50
    const char* inputhex[HASHCOUNT] = {
        ""
    }; 
    const char* expected[HASHCOUNT] = { 
        ""
    };
    uint256 scrypthash;
    std::vector<unsigned char> inputbytes;
    
    for (int i = 0; i < HASHCOUNT; i++) {
        inputbytes = ParseHex(inputhex[i]);
        unsigned int blocktime = *(unsigned int*)(&inputbytes[68]);
        printf("%i\n", blocktime);
        unsigned char Nfactor = GetNfactor(blocktime);
        unsigned int scratchpad_size = 128 * (1 << (Nfactor+1)) + 512;
        std::vector<char> scratchpad = std::vector<char>(scratchpad_size);
#if defined(USE_SSE2)
        // Test SSE2 scrypt
        scrypt_N_1_1_256_sp_sse2((const char*)&inputbytes[0], 
                                BEGIN(scrypthash), &scratchpad[0], 
                                Nfactor);
#endif
        // Test generic scrypt
        scrypt_N_1_1_256_sp_generic((const char*)&inputbytes[0], 
                                    BEGIN(scrypthash), &scratchpad[0], 
                                    Nfactor);
        BOOST_CHECK_EQUAL(scrypthash.ToString().c_str(), expected[i]);
    }
}

BOOST_AUTO_TEST_SUITE_END()
