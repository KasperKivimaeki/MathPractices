import Data.List
import Data.Maybe

tris t i = t : tris (t + i) (i + 1)
triangles = tris 1 2

divisor a b = mod a b == 0

countDivs a = genericLength $ filter (divisor a) [1..n ']

checkInt n = countDivs n >= 300

answer = fromMaybe 4 $ find checkInt triangles

main = print answer
