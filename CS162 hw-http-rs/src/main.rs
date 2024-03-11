WeChat: cstutorcs
QQ: 749389476
Email: tutorcs@163.com
mod args;
mod http;
mod server;
mod stats;

#[cfg(test)]
mod tests;

use anyhow::Result;

fn main() -> Result<()> {
    server::main()
}
