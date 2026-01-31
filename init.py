import os
import sys

if len(sys.argv) == 1:
    print("ERROR: no argument is provided")
    sys.exit(1)
os.system(f"cp ./templates/template.cpp {sys.argv[1]}")
print(f"copying template.cpp into {sys.argv[1]}")
