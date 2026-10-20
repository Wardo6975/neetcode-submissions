class Solution {
    /**
     * @param {number[]} nums
     * @return {boolean}
     */
    hasDuplicate(nums) {
        let size = nums.length
        const mySet = new Set();

        for(let i = 0; i < size; i++){
            if(mySet.has(nums[i])){
                return true;
            }
            mySet.add(nums[i]);
        }
        return false;

    }
}
