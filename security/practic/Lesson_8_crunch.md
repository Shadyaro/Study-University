## Crunch

* using rockyou.txt for attack

```shell

## move to the wordlists directory

cd /usr/share/wordlists

## copy rockyou.txt to Desktop

cp rockyou.txt /home/kali/Desktop

```

* creating custome wordlists by using crunch

```shell

## Syntax

crunch <min> <max> [options]


## creating 4 by 4 wordlists without option this is by default creat 4 by 4 wordlists that start from a and end with z means take english alphabets

crunch 4 4

## creating wordlists 4 by 4 and put it in wordlists.txt

crunch 4 4 > wordlists.txt

## some key option

-t  # for condition like
    @   # will insert lower case characters
    ,   # will insert upper case characters
    %   # will insert numbers
    ^   # will insert symbols


-o  # output like  ( -o /home/kali/Desktop )

-s  # start

-e  # end

START  # generate the name base on your condition and output

```

* some test

```shell

## creating wordlists 2 by 4 that contain this charcter "qwe" the length of the character has no problem

crunch 2 4 qwe

## creating wordlists 2 by 5 that contain this character "qwer" the lenght of the character has no problem in the end we put the output to the file that name is wordlists.txt

crunch 2 5 qwer > wordlists.txt

## creat the wordlists 6 by 6 that have condition to take all the character as capital

crunch 6 6 -t ,,,,,, > wordlists.txt

## creat the wordlists 6 by 6 that have condition to take all the character as number

crunch 6 6 -t %%%%%% > wordlists.txt

## creat the wordlists 6 by 6 that have condition to take first 2th character as small and 3th character as small and 4th as number and end character 5th as 4

crunch 5 5 -t @@,%4 > wordlists.txt

## creat 3 by 5 wordlists that end with ccc and output the wordlist to file that name like this ( aaa-ccccc.txt)

crunch 3 5 -e ccccc -o START

## creat 3 by 5 wordlists that end with ccc and output the wordlists to file that name like this ( ccc-zzzzz.txt )

crunch 3 5 -s ccc -o START

## creating 4 by 4 wordlists that have this condition but if you are using custome character hand symbol and number this will wrong your work remember that

crunch 4 4 q3as -t ,%@@ > wordlists.txt # wrong way

## creating 4 by 4 wordlists that has this condition ( ,%@@ ) 

crunch 4 4 -t ,%@@ > wordlists.txt 

## creating 2 by 2 wordlists english alphabets that end with dd and output will put on file that name like this ( aa-dd.txt )

crunch 2 2 -e dd -o START

```

* Just Example

```shell

# crunch will display a wordlist that starts at 'a' and ends at 'zzzzzzzz'

crunch 1 8

# crunch  will display a wordlist using the character set abcdefg that starts at 'a' and ends at

crunch 1 6 abcdefg
'gggggg'

```