Copyright (c) 2009-2013 Bitcoin Developers

Distributed under the MIT/X11 software license, see the accompanying
file COPYING or http://www.opensource.org/licenses/mit-license.php.
This product includes software developed by the OpenSSL Project for use in the [OpenSSL Toolkit](http://www.openssl.org/). This product includes
cryptographic software written by Eric Young ([eay@cryptsoft.com](mailto:eay@cryptsoft.com)), and UPnP software written by Thomas Bernard.

UNIX BUILD NOTES
====================

Step-by-Step Guide. Open Linux Terminal Window and run
---------------------

	su - # grant root access, need enter your login password
	apt-get install sudo
	sudo -i
	cd ~ 
	apt-get update
	apt-get upgrade
	apt-get install git screen make automake build-essential libboost-all-dev
	apt-get install yasm binutils libcurl4-openssl-dev openssl libssl-dev 
	wget http://download.oracle.com/berkeley-db/db-4.8.30.NC.tar.gz
	tar zxf db-4.8.30.NC.tar.gz
	cd db-4.8.30.NC/build_unix
	../dist/configure --enable-cxx
	make
	sudo make install
	sudo ln -s /usr/local/BerkeleyDB.4.8/lib/libdb-4.8.so /usr/lib/libdb-4.8.so
	sudo ln -s /usr/local/BerkeleyDB.4.8/lib/libdb_cxx-4.8.so /usr/lib/libdb_cxx-4.8.so
	export BDB_INCLUDE_PATH="/usr/local/BerkeleyDB.4.8/include"
	export BDB_LIB_PATH="/usr/local/BerkeleyDB.4.8/lib"
	cd ~ 
	rm -R ~/db-4.8.30.NC*
	git clone https://github.com/spdcoin/speedcoin 
	cd ~/speedcoin/src/leveldb 
	sh build_detect_platform build_config.mk ./ 
	cd .. 
	make -f makefile.unix USE_UPNP=- 
	cp speedcoind .. 
	# start daemon server
	~/speedcoin/speedcoind 
	#
	# GUI Wallet	
	cd ~/speedcoin
	sudo apt-get install libssl-dev libdb-dev libdb++-dev libqrencode-dev qt4-qmake libqtgui4 libqt4-dev
	sudo apt-get install libminiupnpc-dev libboost-all-dev build-essential git 
	sed -i 's/-mgw48-mt-s-1_55//g' speedcoin-qt.pro
	qmake USE_UPNP=- #(on Ubuntu 14.04: run qmake-qt4 USE_UPNP=-)
	make
	# start gui speedcoin wallet
	~/speedcoin/speedcoin-qt 
