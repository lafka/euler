val x = (1 until 100).foldLeft((1:BigInt))( _ * _ ).toString.map{ c => c.toString.toInt }.foldLeft(0)(_ + _)

println( "Here you go: %d".format(x) )
 
