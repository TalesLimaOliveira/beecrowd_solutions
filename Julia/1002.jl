using Printf

my_pi = 3.14159
raio::Float64 = parse(Float64, readline())
area::Float64 = my_pi * (raio ^ 2)

@printf("A=%.4f", area)
