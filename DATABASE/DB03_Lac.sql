-- Create database DB03.
create database db03_lac;
use db03_lac;
-- Create the Relational Schemes
create table Category (
  CategoryID char(5) primary key,
  CategoryName char(250)
);
create table Product (
  ProductID char(5) primary key,
  ProductName char(250),
  UnitPrice decimal(10,2),
  CategoryID char(5)
);
create table Warehouse (
  WarehouseID char(5) primary key,
  WarehouseAddress varchar(500),
  CategoryID char(5)
);
create table Instock (
  WarehouseID char(5),
  ProductID char(5),
  Quantity int,
  primary key (WarehouseID, ProductID)
);
-- Insert all the required data for queries and integrity constraints.
insert into category 
values 	("C01","Food"),
        ("C02","Clothes"),
        ("C03","Household items"),
        ("C04","Drink"),
        ("C05","Electronic devices");
insert into product
values	("P01","Shushi",80.25,"C01"),
		    ("P02","Pho",30.25,"C01"),
        ("P03","Water",8.75,"C04"),
        ("P04","Coffee",40.5,"C04"),
        ("P05","Short",60.75,"C02"),
        ("P06","Shirt",60.75,"C02"),
        ("P07","Jeans",200.75,"C02"),
		    ("P08","Closet",665.5,"C03"),
        ("P09","Bed",2575.75,"C03"),
        ("P10","Table",1570.75,"C03"),
        ("P11","Chair",770.5,"C03"),
        ("P12","TV",1560.75,"C05"),
        ("P13","Phone",870.75,"C05"),
        ("P14","Laptop",1250.75,"C05");
insert into Warehouse
values	('W01', 'Ha Noi', 'C01'),
		    ('W02', 'HCM', 'C02'),
		    ('W03', 'Da Nang', 'C03'),
        ('W04', 'An Giang', 'C04'),
        ('W05', 'Phu Yen', 'C05');
insert into Instock
values	('W01', 'P01', 100),
        ('W01', 'P02', 120),
        ('W02', 'P05', 80),
        ('W02', 'P06', 90),
        ('W02', 'P07', 60),
        ('W03', 'P08', 30),
        ('W03', 'P09', 25),
        ('W03', 'P10', 50),
        ('W03', 'P11', 45),
        ('W04', 'P03', 200),
        ('W04', 'P04', 150),
        ('W05', 'P12', 40),
        ('W05', 'P13', 70),
        ('W05', 'P14', 35);
-- Kiem tra moi loai co bao nhieu mat hang
select categoryid, count(*)
from product
group by categoryid;
-- KT hang mo coi 
select *
from product
where categoryid not in   (select categoryid
                          from category);
-- KT hang khong co trong kho (hang trong kho chua hang tao lao)
select *
from warehouse
where categoryid not in   (select categoryid
                          from category);
-- KT hang lon chuong (kho)
select *
from instock x
where productid not in (select productid 
                      from warehouse a, product b
                      where x.warehouseid = a.warehouseid
                      and a.categoryid = b.categoryid );