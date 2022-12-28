## Reconance

### Step 1 ( lunch the program )

```shell

# in terminal

recon-ng

# in app

recon-ng

# some command

help

# search for list of option that is available in (recon-ng)

options list

```

### Step 2 ( installing module )

```shell

# serach for all module that is available
marketplace search all

# Installing the module
marketplace install *path_of_module

# Example

marketplace install recon/ports-hosts/ssl_scan

marketplace install recon/domains-hosts/hackertarget

```

### Step 3 ( load the module )

```shell

# load the module to use it

modules load *path_of_module

# Example

modules load recon/domains-hosts/hackertarget

```

### Step 4 ( add target to my list )


```shell

# list of option that is available in this module to target it ( website target )

options list

# set specific option to the list

options set SOURCE *name_of_website

# Example

options set SOURCE uoh.edu.iq

```

### Step 5 ( target list of options )

```shell

# run the program for your source ( uoh.edu.iq ) or for this list that you have

run

```