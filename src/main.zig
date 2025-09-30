const std = @import("std");
const zorro = @import("zorro");

const parse = @import("./parsing/parser.zig");


pub fn main() !void {
    try parse.ProcessArgs();
}

