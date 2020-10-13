#! /usr/bin/env python3

"""
unittesting cold.py solution
"""

__author__ = "Ram Basnet"
__copyright__ = "Copyright 2020"
__license__ = "MIT"


import unittest

from cold import answer, answer1

class ColdTestCase(unittest.TestCase):
    def test_answer(self):
        self.assertEqual(answer('-9 0 -100 -100000 1000000'), 3, 'Assert fail')

    def test_answer(self):
        self.assertEqual(answer('9 -1 100 100000 1000000'), 1, 'Assert fail')

    def test_answer1(self):
        self.assertEqual(answer1('-9 0 -100 -100000 -5434 -52314 1000000'), 5, 'Assert fail')

    def test_answer1(self):
        self.assertEqual(answer1('0'), 0, 'Assert fail')

if __name__ == "__main__":
    unittest.main(verbosity=2)