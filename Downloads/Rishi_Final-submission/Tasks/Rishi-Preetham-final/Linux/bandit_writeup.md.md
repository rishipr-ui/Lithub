 10. ls, base64 -d data.txt
 ls is used to list out, then we use th base64 -d data.txt to decode the base64 encoded data present in the data.txt file

THE PASSWORD OBTAINED: dtR173fZKb0RRsDFSGsg2RWnpNVj3qRr

11. ls,cat data.txt | tr A-Za-z N-ZA-Mn-za-m
tr is a command line used to translate or delete characters
the A-Za-z specifies the set of characters that have to be transformed
the N-ZA-Mn-za-m specifies the corresponding character to which each character of the original set should be transferred.

THE PASSWORD OBTAINED : 7x16WNeHIi5YkIhWsfFIqoognUTyj9Q4

12. commands used in level 12
ls, cat data.txt, head data.txt
cat data.txt | xxd -r > data
mkdir /tmp/rishipr
cd /tmp
cd rishipr
cd
ls
cp data.txt /tmp/rishipr
cd /tmp/rishipr
ls
file data.txt
xxd -r data.txt
xxd -r data.txt > data
ls
file data
gzip data
ls
gunzip data.gz
ls
file data
mv data data.gz
ls
gunzip data.gz
ls
file data
bzip2 -d data
ls
file data.out
gunzip data.out
mv data.out data.gz
ls
gunzip data.gz
ls
file data
tar xvf data
ls
file data5.bin
tar xvf data5.bin
file data6.bin
bzip2 -d data6.bin
ls
file data6.bin.out
file data8.bin
mv data8.bin data8.gz
ls
gunzip data8.gz
ls
file data8
cat data8
first we list out the code, then we check the contents of the data.txt file, then we use head command to display the first 10 lines of the file.then we check the contents again.we pipe it and then we convert the hexdump back to binary form.we create a new directory and add a tempororay file, in which we make the new directory.then we get into the new direcctory and list it out, we check the file type of the data.txt file and decompress it one by one multiple times till we reach the required ancii text file to get the password, there was many decompressions. including using decompression of hexdump files, gzip files,gz files,  bzip files, tar archives.all these multiple times to finally find a text file which give us the password for the next level.

THE PASSWORD OBTAINED : FO5dwFsc0cbaIiH0h8J2eUks2vdTDwAn 

13.  code used for level 13 
ls
cat sshkey.private
(create a file and paste the rsa key in it and save it)

ls
chmod +x sshkey.private.txt
ls
chmod 600 sshkey.private.txt
sh -p 2220 -i sshkey.private.txt bandit14@bandit.labs.overthewire.org
ls
cd /etc
cd bandit_pass
cat bandit14

we list out the directory, then we cat the sshkey file to get the rsa key , then we make a file then paste the rsa key there and name it as sshkey.private.text
then you give the sshkey file permissions using chmod and -x which basically gives it execute permission.
then we use chmod again to modify the file and give it +600 which basically means giving it read and write permissions.
login into the ssh of bandit14 and get into the etc directory as mentioned in the question and get into the bandit_pass directory and we have a password in the file bandit 14.
THE PASSWORD OBTAINED : MU4VWeTyJk8ROof1qqmcBPaLh7lDCPvS
15. 
in the same ssh, use commands
echo MU4VWeTyJk8ROof1qqmcBPaLh7lDCPvS
echo MU4VWeTyJk8ROof1qqmcBPaLh7lDCPvS | nc localhost 30000
we use echp to send the string(password of the last level) to the standard output and nc helps build a localhost connection to the required port
then it just outputs the password

THE PASSWORD OBTAINED 8xCjnmgoKbGLhHFAZlGE5Tmu4M2tKJQo

16. 
level 15
ssh -p 2220 bandit15@bandit.labs.overthewire.org 
openssl s_client -connect localhost:30001
8xCjnmgoKbGLhHFAZlGE5Tmu4M2tKJQo
we log in into the ssh server of bandit level 15 and then we open a ssl connection and then jus type in the password we obtained to get the password of the next level.
THE PASSWORD OBTAINED : kSkvUpMQ7lBYyCM4GBPvCvT1BfWRy0Dx

17.
level 16 
ssh -p 2220 bandit16@bandit.labs.overthewire.org,
logged into bandit16
used nmap command to sort through ports 31000-32000 to see which of them support sll
found that port 31518 and 31790 supports ssl but 31518 runs only echo
used ncat --ssl to connect to port 31790
copied and pasted rsa private key into file key1 and changed permissions by using chmod
