import subprocess as ab

print("the input")
a, b, c = input(), input(), input()

result = ab.run(
    ["./abc.exe", a, b, c],
    text=True,
    capture_output=True,
    check=True,
    timeout=10,
)

print("Output:")
print(result.stdout)

if result.stderr:
    print("Error:")
    print(result.stderr)
