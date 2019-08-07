# Write your MySQL query statement below
delete  from person  where id not in  (select t.id from (
select min(id) as id from person group by email
    ) t);

