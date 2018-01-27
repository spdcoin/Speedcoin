Speedcoin integration/staging tree
================================

https://www.speedcoin.org

 Copyright (c) 2009-2013 Bitcoin Developers 

 Copyright (c) 2011-2013 Litecoin Developers 

 Copyright (c) 2014-2018 Speedcoin Developers 

What is Speedcoin?
----------------

Speedcoin [SPD] is a lite version of Bitcoin using scrypt-adaptive-N as a proof-of-work algorithm.
 - 1 minute block targets
 - subsidy halves in 2 million blocks (~4 years)
 - 10,105 million total coins
 - 10,000 million premined coins
 - 105,000,000 coins ready to mine
 - 25 coins per block
 - Every block to retarget difficulty with Kimotos Gravity Well algorithm
 - Scrypt-N algorithm

The main problem with any cryptocurrency is that it does not spread widely amongst Internet users 
because new crypto coins are mined by not many people (usually a few hundreds only) who well 
understand computers technology and have special equipment so that ordinary Internet users 
cannot mine new coins and must to buy it.

The main idea behind Speedcoin is different. It is to evenly distribute pre-mined Speedcoins 
to millions of Facebook users across the world through an open clear process on our website. 
Its  process distribution is similar to Iceland's Auroracoin but ours is distributed globally.  

Any Facebook user simply needs to go to Speedcoin.org and log in to our website and enter 
Speedcoin address. 1,000 SPD will be sent to him automatically. To ensure the same user does 
not use multiple Facebook accounts we request that the user have verified Facebook and 
10+ people in his Facebook friend list.

https://speedcoin.org/info/free_coins/Free_Speedcoins.html 


To promote the success of Speedcoin worldwide, we use affiliate programme on our website 
Speedcoin.org and pay 5 Speedcoins  as a Reward for each new user. Webmasters can place the 
Speedcoin affiliate link on their website/s and normal users can sent the affiliate link to 
their friends or publish it in their blogs. In our opinion, any time you use to spread the 
news of Speedcoin should be rewarded. That is why we made the affiliate programme. 

https://speedcoin.org/info/affiliate/Affiliate_Program_Speedcoins.html 


For more information, as well as an immediately useable, binary version of
the Speedcoin client sofware, see https://www.speedcoin.org




Windows Installation
------------------

run speedcoin-1.0-win32-setup.exe 




Mac Installation
------------------

run speedcoin-1.0-mac-osx.zip




Linux Installation
------------------

Simple Step-by-Step Guide. Open Linux Terminal Window and run

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

	


	
Linux Speedcoin Upgrade to latest version
--------------------------------------
If you have an old version of Speedcoin installed, please use the guide below

	su -
	~/speedcoin/speedcoind stop # stop speedcoind server
	apt-get update
	apt-get upgrade
	export BDB_INCLUDE_PATH="/usr/local/BerkeleyDB.4.8/include"
	export BDB_LIB_PATH="/usr/local/BerkeleyDB.4.8/lib"
	cd ~ 
	rm -R ~/speedcoin
	git clone https://github.com/spdcoin/speedcoin 
	cd ~/speedcoin/src/leveldb 
	sh build_detect_platform build_config.mk ./ 
	cd .. 
	make -f makefile.unix USE_UPNP=- 
	cp speedcoind .. 
	~/speedcoin/speedcoind # start speedcoind server
	cd ~/speedcoin
	sed -i 's/-mgw48-mt-s-1_55//g' speedcoin-qt.pro
	qmake USE_UPNP=-  # (on Ubuntu 14.04: run qmake-qt4 USE_UPNP=-)
	make
	~/speedcoin/speedcoin-qt # start speedcoin gui

	
License
-------

Speedcoin is released under the terms of the MIT license. See `COPYING` for more
information or see http://opensource.org/licenses/MIT.

