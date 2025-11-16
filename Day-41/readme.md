# Day-41| Notes
## topic: sql commands crud

1. CREATE DATABASE

Command:
```
CREATE DATABASE IF NOT EXISTS TEMP;
```
General Note

Used to create a new database.

IF NOT EXISTS prevents errors when the database already exists.

2. USE DATABASE

Command:
```
USE TEMP;
```
General Note

Selects the database where your upcoming queries will run.

3. CREATE TABLE

Command:
```
CREATE TABLE STUDENT (...);
```
General Note

Used to create a new table inside the selected database.

Defines columns, their data types, and constraints like PRIMARY KEY, NOT NULL, etc.

✔ Primary Key → uniquely identifies each row.
✔ Foreign Key → connects one table to another.

4. INSERT INTO

Command:
```
INSERT INTO STUDENT VALUES (...);
```
General Note

Inserts data (records/rows) into a table.

Make sure the order of values matches the column order in the table.

5. SELECT

Command:
```
SELECT * FROM STUDENT;
```
General Note

Used to retrieve data from a table.

* means select all columns.

6. FOREIGN KEY

Command:
```
foreign key(c_ID) references student(id)
```
General Note

Creates a relationship between two tables.

Ensures the value in c_ID must already exist in student.id.

⭐ Summary
Command	Purpose
CREATE DATABASE	Creates a new database
USE	Selects a database
CREATE TABLE	Creates a table with structure
PRIMARY KEY	Makes a column unique + not null
FOREIGN KEY	Links two tables
INSERT	Adds new data
SELECT	Reads data
