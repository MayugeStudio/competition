import os
import sys

PATH = "./atcoder-problems"

CPP_SOURCE = """int main() {
}"""

def error(msg: str) -> None:
    print("ERROR: " + msg)

def usage(program_name: str) -> None:
    print(f"Usage: {program_name} <contest-number>")

def main(contest_number: str) -> None:
    contest_path = PATH + "/" + contest_number
    if os.path.isdir(contest_path):
        error(f"This contest directory already exists: {contest_number}")
        sys.exit(1)

    os.mkdir(contest_path)
    print(f"INFO: sucessfully create a directory at {contest_path}")


if __name__ == "__main__":
    if len(sys.argv) <= 1:
        usage(sys.argv[0])
        sys.exit(1)
    program_name, *args = sys.argv
    contest_number, *args = args
    main(contest_number)

