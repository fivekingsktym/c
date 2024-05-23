# C Programming


## Building runner file
- make hello

- clang yourcodefile.c or gcc yourcodefile.c 
    - Eg:- clang hello.c or gcc hello.c
    - it will make a runnable file with default name a.out, you can run

- clang -o output_filename yourcodefile.c or gcc -o output_filename yourcodefile.c
    - Eg:- clang -o hello hello.c or gcc -o hello hello.c


# Run the script
- ./a.out or hello or other name as well



### cs50 library link:
pip3 install cs50
or 

git clone https://github.com/cs50/libcs50.git
cd libcs50
sudo make install

### CS50 is not comes with c language, so you need to add them in the compilation time:

gcc -o get_negative_int get_negative_int.c -lcs50
or
clang -o get_negative_int get_negative_int.c -lcs50
or
cc get_negative_int.c -lcs50 -o get_negative_int