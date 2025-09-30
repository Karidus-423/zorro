const std = @import("std");

pub fn ProcessArgs() !void {
    const commands: [][]u8 = &.{
        "compile",
        "repl",
    };

    var start_general_allocator: std.heap.GeneralPurposeAllocator(.{}) = .init;
    const general_allocator = start_general_allocator.allocator();

    const args = try std.process.argsAlloc(general_allocator);
    defer std.process.argsFree(general_allocator, args);

    for (args, 0..) |arg, i| {
    }
}
