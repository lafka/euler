sum (takeWhile (< 4000000) [ x | x <- (map fst $ iterate (\ (x,y) -> (y,x+y)) (1,2)), 0 == (x `mod` 2) ])
