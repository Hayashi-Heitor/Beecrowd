SELECT c.name, r.rentals_date
FROM customers c INNER JOIN rentals r ON 
c.id = r.id_customers
WHERE extract(month from r.rentals_date) = 9;
