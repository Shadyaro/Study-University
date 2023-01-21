## finding open and close port using nmap

```shell

nmap -h

nmap *website

# example

nmap cnn.com

# searching for range of ip

nmap *ip_address_start_range/end_range

# Example

nmap 192.168.1.0/24

# finding OS (operating system)

nmap -O -v *website

# Example

nmap -O -v tutorialspoint.com

# searching for udp protocol

nmap -sU *ip_address_of_website_or_website

# Example

nmap -sU cnn.com

# searching for specific port

nmap -sU -p *port_number

# Example

nmap -sU -p 80,444 cnn.com

# using some specific ip in file

nmap -iL *file_name.txt

# Example

nmap -iL my_ip.txt

```