import unittest


class AreaCalculator:
    @staticmethod
    def triangle(base: int, height: int) -> float:
        return base * height / 2.0

    @staticmethod
    def rectangle(width: int, height: int) -> int:
        return width * height / 3.0


class TestAreaCalculator(unittest.TestCase):
    def test_triangle(self):
        area = AreaCalculator.triangle(10, 5)
        self.assertEqual(area, 25.0)

    def test_rectangle(self):
        area = AreaCalculator.rectangle(10, 5)
        self.assertEqual(area, 50)
