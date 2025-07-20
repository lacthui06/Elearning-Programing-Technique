create database DB04_Lac;
use db04_lac;
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
create table customer (
    CustomerID char(3) primary key,
    CustomerName char(250),
    CustomerAddress varchar(500)
);
create table Orders (
    OrderID char(3) primary key,
    OrderDate date,
    RequiredDate date,
    CustomerID char(3)
);
create table OrderDetail (
    OrderID char(3),
    ProductID char(3),
    OrderQuantity int,
    primary key (OrderID, ProductID)
);
create table Delivery (
    DeliveryID char(3) primary key,
    DeliveryDate date,
    OrderID char(3)
);
create table DeliveryDetail (
    DeliveryID char(3),
    ProductID char(3),
    DeliveryQuantity int,
    primary key (DeliveryID, ProductID)
);
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
insert into customer
values  ('U01','Thai Anh A','Duong so 1'),
        ('U02','Thai Anh B','Duong so 2'),
        ('U03','Thai Anh C','Duong so 3'),
        ('U04','Thai Anh D','Duong so 4'),
        ('U05','Thai Anh E','Duong so 5'),
        ('U06','Thai Anh F','Duong so 6'),
        ('U07','Thai Anh G','Duong so 7'),
        ('U08','Thai Anh H','Duong so 8'),
        ('U09','Thai Anh J','Duong so 9'),
        ('U10','Thai Anh K','Duong so 10'),
        ('U11','Thai Anh L','Duong so 11'),
        ('U12','Thai Anh M','Duong so 12'),
        ('U13','Thai Anh N','Duong so 13'),
        ('U14','Thai Anh O','Duong so 14'),
        ('U15','Thai Anh P','Duong so 15'),
        ('U16','Thai Anh T','Duong so 16'),
        ('U17','Thai Anh R','Duong so 17'),
        ('U18','Thai Anh O','Duong so 18'),
        ('U19','Thai Anh P','Duong so 19'),
        ('U20','Thai Anh T','Duong so 20');
insert into orders
values  ('O01','2025-03-27','2025-03-28','U01'),
        ('O02','2025-03-27','2025-03-28','U01'),
        ('O03','2025-03-27','2025-03-28','U05'),
        ('O04','2025-03-27','2025-03-28','U05'),
        ('O05','2025-03-26','2025-03-28','U02'),
        ('O06','2025-03-26','2025-03-28','U02'),
        ('O07','2025-03-26','2025-03-28','U03'),
        ('O08','2025-03-26','2025-03-28','U03'),
        ('O09','2025-03-26','2025-03-28','U06'),
        ('O10','2025-03-26','2025-03-28','U06'),
        ('O11','2025-03-26','2025-03-28','U04'),
        ('O12','2025-03-26','2025-03-28','U04'),
        ('O13','2025-03-25','2025-03-29','U05'),
        ('O14','2025-03-25','2025-03-29','U05'),
        ('O15','2025-03-25','2025-03-29','U07'),
        ('O16','2025-03-25','2025-03-29','U07'),
        ('O17','2025-03-25','2025-03-29','U08'),
        ('O18','2025-03-25','2025-03-29','U09'),
        ('O19','2025-03-25','2025-03-29','U10'),
        ('O20','2025-03-25','2025-03-29','U11'),
        ('O21','2025-03-25','2025-03-29','U13'),
        ('O22','2025-03-25','2025-03-29','U12'),
        ('O23','2025-03-25','2025-03-29','U14'),
        ('O24','2025-03-25','2025-03-29','U15'),
        ('O25','2025-03-27','2025-03-30','U16'),
        ('O26','2025-03-27','2025-03-30','U17'),
        ('O27','2025-03-27','2025-03-30','U18'),
        ('O28','2025-03-27','2025-03-30','U19'),
        ('O29','2025-03-27','2025-03-31','U20'),
        ('O30','2025-03-27','2025-03-31','U15');
insert into OrderDetail
values  ('O01','P01',2),
        ('O02','P02',2),
        ('O03','P03',2),
        ('O04','P04',2),
        ('O05','P05',2),
        ('O06','P06',3),
        ('O07','P07',3),
        ('O08','P08',3),
        ('O09','P09',3),
        ('O10','P10',3),
        ('O11','P11',3),
        ('O12','P12',3),
        ('O13','P13',3),
        ('O14','P14',3),
        ('O15','P01',4),
        ('O16','P02',4),
        ('O17','P03',4),
        ('O18','P04',4),
        ('O19','P05',4),
        ('O20','P14',4),
        ('O21','P13',4),
        ('O22','P12',4),
        ('O23','P11',2),
        ('O24','P10',2),
        ('O25','P09',2),
        ('O26','P08',2),
        ('O27','P07',2),
        ('O28','P12',3),
        ('O29','P11',3),
        ('O30','P10',3);
insert into delivery
values  ('D01','2025-03-28','O01'),
        ('D02','2025-03-28','O02'),
        ('D03','2025-03-28','O03'),
        ('D04','2025-03-28','O04'),
        ('D05','2025-03-28','O05'),
        ('D06','2025-03-28','O06'),
        ('D07','2025-03-28','O07'),
        ('D08','2025-03-28','O08'),
        ('D09','2025-03-28','O09'),
        ('D10','2025-03-28','O10'),
        ('D11','2025-03-28','O11'),
        ('D12','2025-03-28','O12'),
        ('D13','2025-03-29','O13'),
        ('D14','2025-03-29','O14'),
        ('D15','2025-03-29','O15'),
        ('D16','2025-03-29','O16'),
        ('D17','2025-03-29','O17'),
        ('D18','2025-03-29','O18'),
        ('D19','2025-03-29','O19'),
        ('D20','2025-03-29','O20'),
        ('D21','2025-03-29','O21'),
        ('D22','2025-03-29','O22'),
        ('D23','2025-03-29','O23'),
        ('D24','2025-03-29','O24'),
        ('D25','2025-03-30','O25'),
        ('D26','2025-03-30','O26'),
        ('D27','2025-03-30','O27'),
        ('D28','2025-03-30','O28'),
        ('D29','2025-03-31','O29'),
        ('D30','2025-03-31','O30');
insert into DeliveryDetail
values  ('D01','P01',2),
        ('D02','P02',2),
        ('D03','P03',2),
        ('D04','P04',2),
        ('D05','P05',2),
        ('D06','P06',3),
        ('D07','P07',3),
        ('D08','P08',3),
        ('D09','P09',3),
        ('D10','P10',3),
        ('D11','P11',3),
        ('D12','P12',3),
        ('D13','P13',3),
        ('D14','P14',3),
        ('D15','P01',4),
        ('D16','P02',4),
        ('D17','P03',4),
        ('D18','P04',4),
        ('D19','P05',4),
        ('D20','P14',4),
        ('D21','P13',4),
        ('D22','P12',4),
        ('D23','P11',2),
        ('D24','P10',2),
        ('D25','P09',2),
        ('D26','P08',2),
        ('D27','P07',2),
        ('D28','P12',3),
        ('D29','P11',3),
        ('D30','P10',3);
-- Đơn đặt hàng nào đạt tất cả các mặt hàng thuộc loại 'C01'
-- Kết quả ra ít nhất 2 don
-- Thêm đơn hàng mới
INSERT INTO Orders VALUES 
    ('O31','2025-03-28','2025-03-29','U01'),
    ('O32','2025-03-28','2025-03-29','U02');

-- Gắn 2 sản phẩm thuộc C01 cho 2 đơn này
INSERT INTO OrderDetail VALUES
    ('O31','P01',1),
    ('O31','P02',1),
    ('O32','P01',2),
    ('O32','P02',2);

SELECT DISTINCT OD1.OrderID
FROM OrderDetail AS OD1
WHERE NOT EXISTS (  SELECT P.ProductID
                    FROM Product AS P
                    WHERE P.CategoryID = 'C01'
                    AND P.ProductID NOT IN (SELECT OD2.ProductID
                                            FROM OrderDetail AS OD2
                                            WHERE OD2.OrderID = OD1.OrderID ));