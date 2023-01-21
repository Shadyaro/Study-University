## Some Warning

* you can't crack the same file of hash that you done before

* you can't crack the same username that you done before you should restart the kali linux

## John

* hash generater [website](https://www.md5hashgenerator.com/)

1. cracking password hash

```shell

## the 
john --format=raw-md5 hash.txt

```

2. cracking password user in linux


```shell

useradd -r my_user

passwd my_user

unshadow /etc/passwd /etc/shadow

unshadow /etc/passwd /etc/shadow > /home/kali/Desktop/hash.txt

## using default wordlist in john

john --format=crypt hash.txt

## using custome wordlist by crunch

john --wordlist=crunch.txt --format=crypt hash.txt

## using rockyou.txt wordlist

john --wordlist=rockyou.txt --format=crypt hash.txt

```

3. cracking hash using custome wordlists

```shell

john --wordlist=rockyou.txt hash.txt

john --wordlist=crunch.txt hash.txt

```

4. cracking password using zip file

```shell

## Warning the zip file you are choosing it should have password on

## Step 1: extract hash in the zip file and put on the hash.txt file

zip2john zipfile.zip > hash.txt

## Step 2: cracking hash file using this 3 method

john --wordlist=rockyou.txt hash.txt

## or 

john --format=zip hash.txt

## or 

john hash.txt

```