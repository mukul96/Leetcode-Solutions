# Write your MySQL query statement below
select MAX(salary) as SecondHighestSalary from employee where salary not in (select MAX(salary) from employee); 
