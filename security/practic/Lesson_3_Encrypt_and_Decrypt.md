## Encrypt and Decrypt using (gpg)

### Step 1 ( installing gpg tool )

```shell

sudo apt update

sudo apt install gpg

```

### Step 1 ( creating gpg key )

```shell

# generate gpg key
gpg --gen-key

    # some option that is ask you
    Real name: *name-of-gpg
    Email address: *email-typing-is-optional
    Change (N)ame, (E)mail, or (O)kay/(Q)uit? o
    password: secure-password! # secure password is Accept # week password will be Reject
    passphrase: secure-password!

```

### Step 1 ( creating file )

```shell

# creating file using touch command

touch *file-name.txt 

# Example

touch file1.txt

# edit the file

vi *file-name.txt 

# Example

vi file1.txt # type some word on

```

### Step 1 ( encrypt file )

```shell

# encrypt the file using this gpg key that you create it

gpg -e -r *gpg-key-name *file-name.txt

# looking inside my file

cat *file-name.txt

```

### Step 1 ( decrypt the file )

```shell

# decrypt the file (file-name.txt.gpg) and output the content to the specific file (output-file-name.txt)

gpg -d -o *output-file-name.txt *file-name.txt.gpg

# looking inside my file

cat *output-file-name.txt

```
