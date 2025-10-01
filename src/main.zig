const std = @import("std");
const mem = std.mem;
const zorro = @import("zorro");

const parse = @import("./parsing/parser.zig");

const ARGS_ERROR = enum {
    FILE_PASSED_NOT_FOUND,
    WRONG_FLAG,
    WRONG_COMMAND,
};

// fn RunProgram(src_code: []u8) !void{
// }


// fn RunRepl() !void{
// }

fn PrintUsage() !void{
    std.debug.print("Usage: zorro <COMMANDS>\n\n",.{});
    std.debug.print("COMMANDS\n",.{});
    std.debug.print("run:     Pass in a file to execute\n",.{});
    std.debug.print("repl:    Run the live environment to test code on the fly.\n",.{});
}


fn ProcessArgs() !void{
    var start_general_allocator: std.heap.GeneralPurposeAllocator(.{}) = .init;
    const general_allocator = start_general_allocator.allocator();

    const args = try std.process.argsAlloc(general_allocator);
    defer std.process.argsFree(general_allocator, args);

    if (args.len == 1) {
        try PrintUsage();
    }

    for (args) |arg| {
        //Take in the rest of the args as an array of strings.
        if (mem.eql(u8, arg, "compile")) {
            // RunProgram(args[i..]);
            break;
        }

        //Take in the rest of the args for the repl options.
        if (mem.eql(u8, arg, "repl")) {
            std.debug.print("REPLING...",.{});
            // RunRepl();
            break;
        }
    }
}

pub fn main() !void {
    try ProcessArgs();
}

