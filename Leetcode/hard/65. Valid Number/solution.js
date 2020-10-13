/**
 * https://leetcode.com/problems/valid-number/
 * @param {string} s
 * @return {boolean}
 */
const isNumber = s => s.trim().match(/^[\-\+]?(\d+(\.\d*)?|\.\d+)(e[\-\+]?\d+)?$/) != null