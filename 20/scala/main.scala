import scala.runtime.RichChar

var n: BigInt = 1
var t: Int    = 0

for { i <- List.range(1, 101)} n = n*i
for { char <- n.toString } t += (char:RichChar).getNumericValue

println( "Here you go: %d".format(t) )

