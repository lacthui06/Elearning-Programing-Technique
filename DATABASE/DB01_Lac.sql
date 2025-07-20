create database DB01_LAC;
use DB01_LAC;
create table Subject 
( 
	SubjectID char(3) primary key,
    SubjectName varchar(40) not null,
    Units int,
    check ( Units > 0)
);
-- nhap vao sever 5 mon hoc
insert into subject
values
     ('S01', 'Co so du lieu', 3),
     ('S02', 'Toan', 5),
     ('S03', 'He dieu hanh', 2),
     ('S04', 'Mang', 6),
     ('S05', 'Ngu Van', 4);

create  table class
( 
	ClassID char(3) primary key,
    ClassName varchar(40) not null,
    ClassYear varchar(40)
);
insert into class
values
      ('C01', 'lop1', '2022'),
      ('C02', 'lop2', '2023')
      ('C03', 'lop3', '2024');
create table Student 
( 
    StudentID char(3) primary key, 
    StudentName varchar(40),
    StudentAddress varchar(40), 
    ClassID char(3),
    foreign key (classID) references class(classID)
);
insert into student
values
	('T01', 'PhanGiaKiet', 'HoChiMinh', 'C01'),
    ('T02', 'VoMinhKiet', 'HoChiMinh', 'C01'),
    ('T03', 'NhanTuanAnh', 'HoChiMinh', 'C01'),
    ('T04', 'PhamDucDat', 'HoChiMinh', 'C01'),
    ('T05', 'LuongNgocQuy', 'HoChiMinh', 'C01'),
    ('T06', 'NguyenManhCuong', 'HoChiMinh', 'C01'),
    ('T07', 'VoDacQuang', 'HoChiMinh', 'C02'),
    ('T08', 'NguyenGiaHuy', 'HoChiMinh', 'C02'),
    ('T09', 'BuiQuynhHuong', 'HoChiMinh', 'C02'),
    ('T10', 'NguyenKhanhNgoc', 'HoChiMinh', 'C02'),
    ('T11', 'LamNgocHien', 'HoChiMinh', 'C02'),
    ('T12', 'TranKimNgoc', 'HoChiMinh', 'C02'),
    ('T13', 'PhamHuuTho', 'HoChiMinh', 'C02'),
    ('T14', 'TranNgocMinh', 'HoChiMinh', 'C03'),
    ('T15', 'PhamTanPhuc', 'HoChiMinh', 'C03'),
    ('T16', 'NguyenMinhHuy', 'HoChiMinh', 'C03'),
    ('T17', 'NguyenHoangHuy', 'HoChiMinh', 'C03'),
    ('T18', 'PhamMinhKhang', 'HoChiMinh', 'C03'),
    ('T19', 'TranHuuLoc', 'HoChiMinh', 'C03'),
    ('T20', 'NguyenNgocAnh', 'HoChiMinh', 'C03');
select * from student ; 
update student
set classID = 'C02'
where studentID = 'T01';
create table StudentGrades
(
    StudentID char(3),
    SubjectID char(3),
    Grades int,
    primary key(StudentId, SubjectId)
);

select * from student;
insert into StudentGradeS
values
     ('T01', 'S01', 8),
     ('T01', 'S02', 7),
     ('T01', 'S03', 9),
     ('T01', 'S04', 6), 
     ('T01', 'S05', 8),
     ('T02', 'S01', 7), 
     ('T02', 'S02', 6),
     ('T02', 'S03', 8), 
     ('T02', 'S04', 7), 
     ('T02', 'S05', 9),
     ('T03', 'S01', 8), 
     ('T03', 'S02', 7),
     ('T03', 'S03', 6),
     ('T03', 'S04', 9), 
     ('T03', 'S05', 7),
	 ('T04', 'S01', 6), 
     ('T04', 'S02', 8), 
     ('T04', 'S03', 7), 
     ('T04', 'S04', 6),
     ('T04', 'S05', 8),
     ('T05', 'S01', 7), 
     ('T05', 'S02', 8), 
     ('T05', 'S03', 9), 
     ('T05', 'S04', 7), 
     ('T05', 'S05', 6),
     ('T06', 'S01', 9), 
     ('T06', 'S02', 7),
	 ('T06', 'S03', 6), 
     ('T06', 'S04', 8), 
     ('T06', 'S05', 7),
     ('T07', 'S01', 8), 
     ('T07', 'S02', 6), 
     ('T07', 'S03', 7), 
     ('T07', 'S04', 8), 
     ('T07', 'S05', 9),
     ('T08', 'S01', 7), 
     ('T08', 'S02', 9), 
     ('T08', 'S03', 8), 
     ('T08', 'S04', 6),
     ('T08', 'S05', 7),
     ('T09', 'S01', 8),
     ('T09', 'S02', 7), 
     ('T09', 'S03', 6),
     ('T09', 'S04', 9), 
     ('T09', 'S05', 8),
     ('T10', 'S01', 7), 
     ('T10', 'S02', 6), 
     ('T10', 'S03', 8), 
     ('T10', 'S04', 9), 
     ('T10', 'S05', 7),
     ('T11', 'S01', 8), 
     ('T11', 'S02', 9),
     ('T11', 'S03', 7),
     ('T11', 'S04', 6),
     ('T11', 'S05', 8),
	 ('T12', 'S01', 7), 
     ('T12', 'S02', 8),
     ('T12', 'S03', 9),
     ('T12', 'S04', 6),
     ('T12', 'S05', 7),
     ('T13', 'S01', 9), 
     ('T13', 'S02', 7),
     ('T13', 'S03', 8), 
     ('T13', 'S04', 7), 
     ('T13', 'S05', 6),
     ('T14', 'S01', 8),
     ('T14', 'S02', 6),
     ('T14', 'S03', 7), 
     ('T14', 'S04', 9),
     ('T14', 'S05', 7),
     ('T15', 'S01', 7),
     ('T15', 'S02', 8),
     ('T15', 'S03', 6), 
     ('T15', 'S04', 7), 
     ('T15', 'S05', 9),
     ('T16', 'S01', 6), 
     ('T16', 'S02', 9),
     ('T16', 'S03', 8),
     ('T16', 'S04', 7),
     ('T16', 'S05', 7),
     ('T17', 'S01', 8), 
     ('T17', 'S02', 7), 
     ('T17', 'S03', 6), 
     ('T17', 'S04', 9),
     ('T17', 'S05', 8),
     ('T18', 'S01', 7), 
     ('T18', 'S02', 6), 
     ('T18', 'S03', 8),
     ('T18', 'S04', 9),
     ('T18', 'S05', 7),
     ('T19', 'S01', 9), 
     ('T19', 'S02', 7), 
     ('T19', 'S03', 6), 
     ('T19', 'S04', 8), 
     ('T19', 'S05', 7),
     ('T20', 'S01', 8),
     ('T20', 'S02', 6), 
     ('T20', 'S03', 7),
     ('T20', 'S04', 9), 
     ('T20', 'S05', 7);

-- 5.1. Find the students that belong to class ID ”C02”.
select *
from student 
where classid not in ("C01", "C02");
-- 5.2. Find the students that belong to class name = ”Computer Science”.
select *
from student A , class B
where A.classid = B.classid
and classname ="Lop 1";
-- 5.3. Find the students (All information) whose class year is ”2024”
select *
from class a , student b
where a.classid=b.classid
and classyear = "2024-2025";
-- 5.4. Find the Subject (name and units) of the Subject ID “S01”.
select subjectname,units
from subject 
where subjectid = "s01";
-- 5.4.1 cho het cac mon hoc co unit tu 3->4
select * 
from subject
where units between 3 and 5;
-- 5.5. What are the grades of student ”T02” for subject ”S02”?
select grades 
from studentgrades
where studentid="t02"
and subjectid="s02";
-- 5.5.1 cho biet sv (id,name) thi dat cac mon co units>3
select a.studentid, studentname
from student a, studentgrades b, subject c
where a.studentid=b.studentid
and b.subjectid=c.subjectid
and grades>=5
and units >3;
-- 5.6. Find the subjects (ID, Name, and Grades) in which student ”T02” failed.
select a.subjectid, subjectname, b.grades
from subject a, studentgrades b
where a.subjectid=b.subjectid
and studentid="T02";
-- 5.6 USE JOIN
select a.subjectid, subjectname, b.grades
from subject a join studentgrades b on a.subjectid=b.subjectid
and studentid="T02";
-- 5.7. Which subjects (*) did student ”T03” never take the exam for?
select * 
from subject
where subjectid not in (select subjectid 
						from studentgrades 
						where studentid = 'T03');
-- use join 
select *
from subject A left join ( select subjectid, studentid
							from studentgrades
							where studentid ='T03') B on A.subjectid = B.subjectid
where studentid is null;
-- FUNCTION IN SQL
select count(*) 
from student 
where classid = 'C02';
-- Tong sv cua C01 & C02
select count(*)
from student
where classid = 'C01' -- where classid = ('C02', 'C01');
or classid = 'C02';
-- 
select sum(grades), max(grades), min(grades), avg(grades)
from studentgrades;
--
select (max(grades) + min(grades)) / avg(grades) as TB
from studentgrades
where studentid = 'T03' ;
-- 5.8. How many students are in each class?
select classid, count(*) as sisolop
from student
group by classid;
-- 5.9. Find the classes with the largest number of students.
select a.classid, count(*) as sisolop
from class a, student b
where a.classid = b.classid
group by a.classid
having count(*) >= all
(select count(*)
from student
group by classid );
-- 5.10. Calculate the GPA (grade point average) of student ID ”T02”.
select avg(grades) as GPA
from studentgrades
where studentid= 'T02';
-- 5.11. Calculate the GPA for each student.
select studentid, avg(grades) as GPA
from studentgrades
group by studentid;
-- 5.11.1 Calculate the GPA for each student and show name, id.
select a.studentid, studentname, avg(grades) as GPA
from student a , studentgrades b
where a.studentid= b.studentid
group by studentid, studentname ; -- select gi thi group by do
-- 5.12. Calculate the GPA of class ID ”C02”.
select avg(grades) AS GPA
from studentgrades a , student b
where a.studentid= b.studentid
and classid= 'C02';
-- 5.13. Calculate the GPA for each class.
select classid, avg(grades) AS GPA
from studentgrades a , student b
where a.studentid= b.studentid
group by classid;
-- 5.13.1. Calculate the GPA for each class although null.
SELECT b.classid, AVG(a.grades) AS GPA
FROM student b
LEFT JOIN studentgrades a ON a.studentid = b.studentid
GROUP BY b.classid;
-- 5.14 & 5.15. Find the students who have the largest GPA.
select a.studentid, studentname, avg(grades) as GPA
from student a , studentgrades b
where a.studentid= b.studentid
group by studentid, studentname
having avg(grades) >= all 
(select avg(grades)
from studentgrades
group by studentid );
-- 5.16. Find the classes that have the largest average GPA.
select classid, avg(grades)
from studentgrades a, student b
where a.studentid = b.studentid
group by classid
having avg(grades) >= all
(select avg(grades)
from studentgrades a, student b
where a.studentid = b.studentid
group by b.classid);
-- 5.17. Find the classes (ID and Name) that have the largest average GPA
select c.classid, classname, avg(grades) as GPA
from studentgrades a, student b, class c
where a.studentid = b.studentid
and b.classid = c.classid
group by c.classid, classname
having avg(grades) >= all
(select avg(grades)
from studentgrades a, student b
where a.studentid = b.studentid
group by b.classid );
-- 5.18. Calculate the GPA with weights for each student.
select studentid, sum(grades * units)/sum(units) as weightavg
from studentgrades a, subject b
where a.subjectid = b.subjectid
group by studentid;
-- studentgrades(studentid,subjectid) / subject(subjectid)
select distinct studentid
from studentgrades a
where grades >= 5 and not exists 
(select * 
	from subject
	where subjectid not in (select subjectid
							from studentgrades
							where grades >= 5 and a.studentid = studentid )) ;
-- another method
SELECT studentid
FROM studentgrades
WHERE grades >= 5
GROUP BY studentid
HAVING COUNT(DISTINCT subjectid) = (SELECT COUNT(*) FROM subject);
