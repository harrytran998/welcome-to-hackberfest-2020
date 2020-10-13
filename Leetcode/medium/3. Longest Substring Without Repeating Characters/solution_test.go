package solution

import "testing"

func TestLengthOfLongestSubstring(t *testing.T) {
	testCase := map[string]int{
		"abcabcbb": 3,
		"bbbbb":    1,
		"pwwkew":   3,
		"":         0,
	}

	for input, expected := range testCase {
		result := lengthOfLongestSubstring(input)
		if expected != result {
			t.Errorf("Test Failed. input: {%v}, expected {%v}, got {%v}", input, expected, result)
		}
	}
}
