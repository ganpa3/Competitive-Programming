fun main() {
    var tc = readLine()!!.toInt()
    for (t in 1..tc) {
        var (n, x) = readLine()!!.split(" ").map { it.toInt() }
        var l = readLine()!!.split(" ").map { it.toInt() }

        var sum = 0
        var cnt = 0
        for (i in l.indices) {
            sum += (x - l[i])
            if (l[i] == x) cnt++
        }
        
        if (cnt == n) {
            println(0)
        } else if (sum == 0 || cnt != 0) {
            println(1)
        } else {
            println(2)
        }
    }
}
