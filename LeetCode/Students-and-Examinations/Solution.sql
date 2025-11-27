1# Write your MySQL query statement below
2SELECT s.student_id,s.student_name,su.subject_name,count(e.subject_name) AS attended_exams
3FROM Students s
4CROSS JOIN subjects su
5LEFT JOIN Examinations e
6ON s.student_id=e.student_id AND su.subject_name=e.subject_name
7GROUP BY s.student_id,s.student_name,su.subject_name
8ORDER BY s.student_id,su.subject_name