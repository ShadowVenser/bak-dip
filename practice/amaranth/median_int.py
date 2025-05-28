import argparse

parser = argparse.ArgumentParser()
parser.add_argument("--width", type=int, default=8)
parser.add_argument("--size", type=int, default=3)
parser.add_argument("--name", type=str, default="syncMedian")
parser.add_argument("--inner", type=str, default="innerMedian")

args = parser.parse_args()

print(f"""(* top =  1  *)
module {args.name} (
    input clk,
    input clr_n,
    input logic [{args.width-1}:0] arr [{args.size-1}:0][{args.size-1}:0],
    output logic [{args.width-1}:0] med
);

    {args.inner} a_dev (
        .clk(clk),
        .clr_n(clr_n),
        .med(med)""", end="")

for i in range(args.size):
    for j in range(args.size):
        print(f",\n{" "*8}.arr_{i*3+j}(arr[{i}][{j}])", end="")

print(f"\n{" "*4});")
print("\nendmodule\n")
