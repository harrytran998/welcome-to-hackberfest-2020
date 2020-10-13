package solution

func max(a, b int) int {
	if a > b {
		return a
	}
	return b
}

func lengthOfLongestSubstring(s string) int {
	mp := make(map[rune]int)
	start := 0
	res := 0
	for end, v := range s {
		mp[v]++
		for mp[v] > 1 {
			mp[rune(s[start])]--
			start++
		}
		res = max(res, end-start+1)
	}
	return res
}
