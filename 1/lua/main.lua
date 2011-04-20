total = 0
for iterator = 1,  999, 1 do
	if math.mod(iterator,3)  == 0 or math.mod(iterator,5) == 0 then
		total = total+iterator	
	end
	--local check = 5
	--local rem = iterator%check
--	print(rem)
end

print ("The answer you are looking for is", total)
