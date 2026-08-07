class Solution {
    func threeSum(_ nums: [Int]) -> [[Int]] {
        var result = Set<[Int]>()
        //[-1,0,1,2,-1,-4,-2,-3,3,0,4]
        let nums = nums.sorted() // -4,-3,-2 -1,-1, 0 , 1, 2, 3, 4
        
        for i in 0..<nums.count - 2 {
            let currentNum = nums[i]
            var left = i + 1
            var right = nums.count - 1 
            while left < right {
                let sum = nums[left] + nums[right] + currentNum
                if sum == 0 {
                    result.insert([nums[left], nums[right], currentNum])
                    left += 1
                    right -= 1
                }
                if sum < 0 {
                    left += 1
                } else if sum > 0 {
                    right -= 1
                }
            }
        }

        return Array(result)
    }
}
