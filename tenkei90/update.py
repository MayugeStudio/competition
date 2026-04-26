#!/usr/bin/env python3

import glob

filenames = glob.glob("*.cpp")

print(f"progress: {len(filenames)}/90")
print()

filenames.sort()
for filename in filenames:
    print(filename)
