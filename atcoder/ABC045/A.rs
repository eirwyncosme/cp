use std::io;

fn main() {
    let mut a = String::new();
    let mut b = String::new();
    let mut h = String::new();

    io::stdin().read_line(&mut a).unwrap();
    io::stdin().read_line(&mut b).unwrap();
    io::stdin().read_line(&mut h).unwrap();

    let a: i32 = a.trim().parse().unwrap();
    let b: i32 = b.trim().parse().unwrap();
    let h: i32 = h.trim().parse().unwrap();

    let ans = ((a + b) * h) / 2;

    println!("{ans}");
}
