Building the project
=============

Dependencies
-------------

```
gcc >= 5.3.0 or clang >= 3.5
make >= 3.81
automake >= 1.14
autoconf >= 2.69
libtool >= 2.4.2
bison >= 2.3.0
flex >= 2.5.35
```

Ubuntu 15.10 
-----------------------

Required packages :
```
sudo apt-get update
sudo apt-get install make libtool autoconf automake flex bison git
```

For gcc : `sudo apt-get install gcc-5 g++-5`

For clang : `sudo apt-get install clang-3.5 clang++-3.5`

Ubuntu 14.04
------------
```
sudo apt-get install -y software-properties-common wget
sudo add-apt-repository ppa:ubuntu-toolchain-r/test 
echo 'deb http://llvm.org/apt/trusty/ llvm-toolchain-trusty-3.5 main' | sudo tee --append /etc/apt/sources.list > /dev/null
wget -O - http://llvm.org/apt/llvm-snapshot.gpg.key|apt-key add -
```
Then follow the Ubuntu 15.10 required packages installation procedure.

Clone this repository
---------------------
```
git clone https://github.com/SFTtech/nyan.git
cd nyan
```

Build
-----
For gcc : `./autogen.sh && ./configure CC=gcc-5 CXX=g++-5 && make`

For clang : `./autogen.sh && ./configure CC=clang-3.5 CXX=clang++-3.5 && make`






