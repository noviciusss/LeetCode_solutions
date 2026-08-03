# Write your MySQL query statement below
select v.customer_id, COUNT(v.visit_id) as count_no_trans
from Visits v
Left join Transactions t on  v.visit_id = t.visit_id
Where t.transaction_id is Null 
group by v.customer_id;
