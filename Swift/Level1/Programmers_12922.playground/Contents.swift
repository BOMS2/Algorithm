import Foundation

func solution(_ n:Int) -> String {
    var str = String()
    var su = "수"
    if(n == 1){
        return su
    }else if(n % 2 == 0){
        for _ in 0..<n/2{
            str += "수박"
        }
    return str
    }else{
        for _ in 0..<n/2{
            str += "수박"
        }
        str += "수"
        return str
    }
   
}
