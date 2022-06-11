# Write your MySQL query statement below
#select * from Patients where conditions like '% DIAB1%' or conditions like 'DIAB1' ;
select * from Patients where CONDITIONS LIKE '% DIAB1%' OR
CONDITIONS LIKE 'DIAB1%';