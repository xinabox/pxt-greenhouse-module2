//% color=21.63 weight=100 icon="\uf299" block="Greenhouse kit"
//% groups='["SD CARD"]'
namespace greenhouse2
{
	
	// IM01 variables start
	let sdFlag=false
	// IM01 variables end
	
	//%block="IM01 overwrite file %u with %v"
    //%u.defl="log.txt"
    //%group="SD CARD"
    export function overwriteFile(u: string, v: string): void {
        file("/sd/im01/" + u, v, "w")
        return
    }

    //%block="IM01 append file %u with %v"
    //%u.defl="log.txt"
    //%group="SD CARD"
    export function appendFile(u: string, v: string): void {
        file("/sd/im01/" + u, v, "a")
        return
    }

    //%block="IM01 append file %u with line %v"
    //%u.defl="log.txt"
    //%group="SD CARD"
    export function appendFileLine(u: string, v: string): void {
        file("/sd/im01/" + u, v + "\n", "a")
        return
    }


    //%shim=im01::_file
    function file(u: string, v: string, x: string): boolean {
        return true
    }
}