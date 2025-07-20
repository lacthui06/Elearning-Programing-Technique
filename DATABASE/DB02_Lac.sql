-- 1. Find all keys of the relational schemas.
-- Key Category : CategoryID
-- Key Product : ProductID
-- Key Invoice : InvoiceID
-- Key InvoiceDetail : (InvoiceID, ProductID)
-- 2. Create database DB02.
create database DB02_Lac;
-- 3. Create the Relational Schemes.
use db02_lac;
create table Category(
	CategoryID char (25) primary key,
    CategoryName varchar (250) );
create table Product (
	ProductID char (25) primary key,
    ProductName varchar (250),
    UnitPrice decimal (15,3),
    CategoryID char (25) );
create table Invoice (
	InvoiceID char (25) primary key,
    InvoiceDate date,
    Description varchar (500) );
create table InvoiceDetail (
	InvoiceID char (25),
    ProductID char (25), 
    Quantity int,
    primary key (InvoiceID,ProductID) );
-- 4. Insert data:
-- Category. CategoryID: C01 → C05
-- Product. ProductID: P01 → P30
-- Invoice. InvoiceID: I01 → I10
-- InvoiceDetail. Distribute product to the invoice. 
-- There are two to five products for each invoice.
insert into category 
values 	("C01","Food"),
		("C02","Clothes"),
		("C03","Household items"),
		("C04","Drink"),
		("C05","Electronic devices");
insert into invoice
values	("I01", "2025-03-17","Purchase of food"),
		("I02", "2025-03-17","Purchase of clothes"),
        ("I03", "2025-03-17","Purchase of drink"),
        ("I04", "2025-03-17","Purchase of household items"),
        ("I05", "2025-03-16","Purchase of electronic devices"),
        ("I06", "2025-03-16","Purchase of food"),
        ("I07", "2025-03-16","Purchase of clothes"),
        ("I08", "2025-03-15","Purchase of drink"),
        ("I09", "2025-03-15","Purchase of household items"),
        ("I10", "2025-03-15","Purchase of electronic devices");
insert into product
values	("P01","Shushi",80.25,"C01"),
		("P02","Pho",30.25,"C01"),
        ("P03","Beef steak",60.75,"C01"),
        ("P04","Bun dau",60.5,"C01"),
        ("P05","Braised fish",50.5,"C01"),
        ("P06","Com tam",40.75,"C01"),
		("P07","Banh mi",18.5,"C01"),
		("P08","Fried chicken",20.5,"C01"),
        ("P09","Pasta",35.75,"C01"),
        ("P10","Juice",43.75,"C04"),
        ("P11","Soft drink",20.5,"C04"),
        ("P12","Water",8.75,"C04"),
        ("P13","Coffee",40.5,"C04"),
		("P14","Cocktail",60.25,"C04"),
        ("P15","Coat",100.75,"C02"),
        ("P16","Short",60.75,"C02"),
        ("P17","T-shirt",60.75,"C02"),
        ("P18","Shirt",60.75,"C02"),
        ("P19","Jeans",200.75,"C02"),
		("P20","Closet",665.5,"C03"),
        ("P21","Toilet",897.25,"C03"),
        ("P22","Bed",2575.75,"C03"),
        ("P23","Table",1570.75,"C03"),
        ("P24","Chair",770.5,"C03"),
        ("P25","Washing machine",2365.75,"C03"),
		("P26","Fan",687.5,"C03"),
        ("P27","Ipad",176.35,"C05"),
        ("P28","TV",1560.75,"C05"),
        ("P29","Phone",870.75,"C05"),
        ("P30","Laptop",1250.75,"C05");
insert into invoicedetail
values 	("I01","P01",2),
		("I01","P11",2),
        ("I01","P21",2),
        ("I01","P27",2),
        ("I02","P02",2),
        ("I02","P12",2),
		("I03","P23",2),
        ("I03","P30",2),
        ("I04","P04",2),
        ("I04","P24",2),
        ("I04","P32",2),
        ("I04","P26",2),
		("I04","P28",2),
        ("I05","P25",2),
        ("I05","P15",2),
        ("I05","P05",2),
        ("I06","P06",2),
        ("I06","P16",2),
		("I06","P35",2),
        ("I07","P27",2),
        ("I07","P17",2),
        ("I07","P07",2),
        ("I07","P23",2),
		("I07","P21",2),
		("I08","P22",2),
        ("I08","P03",2),
        ("I09","P29",2),
        ("I09","P19",2),
        ("I09","P39",2),
        ("I09","P09",2),
        ("I10","P10",2),
        ("I10","P08",2),
        ("I10","P13",2);
-- 5.16. Find the years with the largest total Cost.
select a.invoicedate, sum(unitprice)
from invoice a, product b, invoicedetail c
where a.invoiceid = c.invoiceid
and b.productid = c.productid
group by a.invoicedate
having sum(unitprice) > any
(select sum(unitprice)
from product b, invoicedetail c
where b.productid = c.productid
group by c.invoiceid );
-- 5.17. Which invoice contains all products?
select invoiceid
from invoicedetail
group by invoiceid
having count(distinct productid) = 
( select count(*)
  from product );
-- 5.18. Which invoice in 2023 contains all products?
select a.invoiceid
from invoicedetail a, invoice b
where a.invoiceid = b.invoiceid
and b.invoicedate = '2023-03-24'
group by a.invoiceid
having count(distinct productid) = 
( select count(*)
  from product );