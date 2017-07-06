# java-talks-to-CPP

how to run:

rm -rf build
cd java
javac Greeting.java 
javah Greeting
cp Greeting.class ../
cp Greeting.h ../
cd ..
mkdir build
cd build/
cmake ../
make
cd ../java/
java Greeting
