#!/usr/bin/env python

import random

n = random.randint(1, 10)
print n

score = []
for i in range(n):
    score.append(random.randint(0, 100))
    print score[i],
print

print random.randint(0, max(score))
