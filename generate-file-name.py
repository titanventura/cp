import sys
import os
import argparse

my_parser = argparse.ArgumentParser(
    description='generate file names in a particular format')

# Add the arguments
my_parser.add_argument('prob',
                       metavar='prob',
                       type=str,
                       help='Problem string')

my_parser.add_argument('day',
                       metavar='day',
                       type=str,
                       help='day')

# Execute the parse_args() method
args = my_parser.parse_args()

problem_name = args.prob

directory = f"day-{args.day}"
print(problem_name, ' is the problem name')
print(directory, ' is the directory to be created')


def get_file_name(inp):
    lc_question_id, lc_prob_name = inp.split(".")
    lc_prob_name = lc_prob_name.strip()
    print(lc_question_id, lc_prob_name)
    lc_prob_name = "-".join(lc_prob_name.split(" "))
    print(lc_question_id, lc_prob_name)
    return f"'{lc_prob_name}-{lc_question_id}.cpp'"


cmd_str = ""
file_name = get_file_name(sys.argv[1])
if os.path.exists(directory):
    cmd_str = f"""cd {directory} && touch {file_name} && echo "/*\n\n*/" > {file_name}"""
else:
    cmd_str = f"""mkdir {directory} && cd {directory} && touch {file_name} && echo "/*\n\n*/" > {file_name}"""

os.system(cmd_str)
