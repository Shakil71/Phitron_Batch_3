USE assignment;
create table student(
	Roll char(5) primary key,
    name varchar(20) not null,
    class int ,
    section char(2)
);
create table library(
	id char(5),
    membershipId char(3) primary key,
    bookName varchar(20) not null,
    studentName varchar(20) not null,
    foreign key (id) references student(Roll)
);
create table fees(
	id char(5),
    amount float check(amount>=500),
    studentName varchar(20) not null,
	foreign key (id) references student(Roll),
    primary key(id,studentName)
);